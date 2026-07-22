#!/bin/bash

# ANSI Color Codes for a clean, visual terminal UI
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Default Prices (Global variables that the Admin can modify)
COFFEE_PRICE=20
TEA_PRICE=15
SANDWICH_PRICE=50
BURGER_PRICE=80

# --- ADMIN PANEL FUNCTION ---
admin_panel() {
    while true; do
        echo -e "\n${RED}=== ADMIN PANEL ===${NC}"
        echo "1. View Current Menu & Prices"
        echo "2. Update Item Prices"
        echo "3. Log Out"
        read -p "Enter choice [1-3]: " admin_choice

        case $admin_choice in
            1)
                echo -e "\n--- Current Menu Prices ---"
                echo "1. Coffee   : Rs. $COFFEE_PRICE"
                echo "2. Tea      : Rs. $TEA_PRICE"
                echo "3. Sandwich : Rs. $SANDWICH_PRICE"
                echo "4. Burger   : Rs. $BURGER_PRICE"
                ;;
            2)
                echo -e "\nWhich item's price do you want to update?"
                echo "1. Coffee"
                echo "2. Tea"
                echo "3. Sandwich"
                echo "4. Burger"
                read -p "Select item [1-4]: " item_choice
                read -p "Enter new price: " new_price
                
                # Check if input is a valid number
                if [[ "$new_price" =~ ^[0-9]+$ ]]; then
                    case $item_choice in
                        1) COFFEE_PRICE=$new_price ;;
                        2) TEA_PRICE=$new_price ;;
                        3) SANDWICH_PRICE=$new_price ;;
                        4) BURGER_PRICE=$new_price ;;
                        *) echo -e "${RED}Invalid item choice!${NC}" ;;
                    esac
                    echo -e "${GREEN}Price updated successfully!${NC}"
                else
                    echo -e "${RED}Error: Price must be a number.${NC}"
                fi
                ;;
            3)
                echo "Logging out of Admin Panel..."
                break
                ;;
            *)
                echo -e "${RED}Invalid choice! Please try again.${NC}"
                ;;
        esac
    done
}

# --- CUSTOMER PORTAL FUNCTION ---
customer_menu() {
    total_bill=0
    while true; do
        echo -e "\n${BLUE}=== HOTEL MENU ===${NC}"
        echo "1. Coffee    - Rs. $COFFEE_PRICE"
        echo "2. Tea       - Rs. $TEA_PRICE"
        echo "3. Sandwich  - Rs. $SANDWICH_PRICE"
        echo "4. Burger    - Rs. $BURGER_PRICE"
        echo "5. View Bill & Checkout"
        echo "6. Cancel Order & Exit"
        read -p "Place your order [1-6]: " cust_choice

        case $cust_choice in
            1)
                total_bill=$((total_bill + COFFEE_PRICE))
                echo -e "${GREEN}Added Coffee! Current Bill: Rs. $total_bill${NC}"
                ;;
            2)
                total_bill=$((total_bill + TEA_PRICE))
                echo -e "${GREEN}Added Tea! Current Bill: Rs. $total_bill${NC}"
                ;;
            3)
                total_bill=$((total_bill + SANDWICH_PRICE))
                echo -e "${GREEN}Added Sandwich! Current Bill: Rs. $total_bill${NC}"
                ;;
            4)
                total_bill=$((total_bill + BURGER_PRICE))
                echo -e "${GREEN}Added Burger! Current Bill: Rs. $total_bill${NC}"
                ;;
            5)
                echo -e "\n${YELLOW}=======================${NC}"
                echo -e "     ${YELLOW}FINAL BILL${NC}"
                echo -e "${YELLOW}=======================${NC}"
                echo -e "Total Amount to Pay: ${GREEN}Rs. $total_bill${NC}"
                echo "Thank you for dining with us!"
                break
                ;;
            6)
                echo -e "${RED}Order cancelled.${NC}"
                break
                ;;
            *)
                echo -e "${RED}Invalid selection. Please try again.${NC}"
                ;;
        esac
    done
}

# --- MAIN ROLE SELECTOR (ACCESS CONTROL) ---
while true; do
    echo -e "\n=================================="
    echo "       WELCOME TO THE CAFE        "
    echo "=================================="
    echo "1. Enter Customer Portal"
    echo "2. Enter Admin Portal"
    echo "3. Exit System"
    read -p "Choose your access role [1-3]: " role

    case $role in
        1)
            # Customers enter straight away
            customer_menu
            ;;
        2)
            # Access Control: Password verification
            # -s flag hides the input as the user types (silent mode)
            read -s -p "Enter Admin Password: " password
            echo "" # New line for clean formatting
            
            if [ "$password" = "admin123" ]; then
                echo -e "${GREEN}Access Granted!${NC}"
                admin_panel
            else
                echo -e "${RED}Access Denied! Incorrect Password.${NC}"
            fi
            ;;
        3)
            echo "Shutting down the system. Goodbye!"
            exit 0
            ;;
        *)
            echo -e "${RED}Invalid choice! Please select 1, 2, or 3.${NC}"
            ;;
    esac
done
