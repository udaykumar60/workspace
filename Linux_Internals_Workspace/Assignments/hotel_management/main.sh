#!/bin/bash
# Login Check
read -p "Username: " user; read -sp "Password: " pass; echo
if [ "$user" != "admin" ] || [ "$pass" != "1234" ]; then
    echo "Access Denied!"; exit 1
fi

# Hotel Logic
rooms=(101 102 103) room_bill=0 food_bill=0
while true; do
    echo -e "\n1.Book 2.Food 3.Bill 4.Exit"; read -p "Choice: " c
    case $c in
        1)  echo "Available: ${rooms[@]}"; read -p "Room: " r
            rooms=(${rooms[@]//*$r*/}); read -p "Nights: " n
            ((room_bill += n * 100)) ;;
        2)  echo "1.Tea(\$5) 2.Meal(\$20)"; read -p "Item & Qty: " f q
            [ "$f" == "1" ] && ((food_bill += q * 5))
            [ "$f" == "2" ] && ((food_bill += q * 20)) ;;
        3)  echo "Room: \$$room_bill | Food: \$$food_bill"
            echo "Total: \$(($room_bill + $food_bill))" ;;
        4)  exit 0 ;;
    esac
done
