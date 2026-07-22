#!/bin/bash

# Initialize the total bill to 0
total_bill=0

while true; do
    # Display the menu
    echo -e "\n=== HOTEL MENU ==="
    echo "1. Coffee    - Rs. 20"
    echo "2. Tea       - Rs. 15"
    echo "3. Sandwich  - Rs. 50"
    echo "4. Burger    - Rs. 80"
    echo "5. View Bill & Checkout"
    echo "6. Cancel & Exit"
    echo "=================="
    
    # Get user choice
    read -p "What would you like to order? [1-6]: " choice

    # Switch case to handle choices
    case $choice in
        1)
            total_bill=$((total_bill + 20))
            echo "Added Coffee! Current Bill: Rs. $total_bill"
            ;;
        2)
            total_bill=$((total_bill + 15))
            echo "Added Tea! Current Bill: Rs. $total_bill"
            ;;
        3)
            total_bill=$((total_bill + 50))
            echo "Added Sandwich! Current Bill: Rs. $total_bill"
            ;;
        4)
            total_bill=$((total_bill + 80))
            echo "Added Burger! Current Bill: Rs. $total_bill"
            ;;
        5)
            echo -e "\n------------------------"
            echo "Total Amount to Pay: Rs. $total_bill"
            echo "Thank you for ordering!"
            echo "------------------------"
            exit 0
            ;;
        6)
            echo "Order cancelled. Goodbye!"
            exit 0
            ;;
        *)
            echo "Invalid option. Please enter a number between 1 and 6."
            ;;
    esac
done
