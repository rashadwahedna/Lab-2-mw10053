#include <iostream>

int main(void){
    int price1;
    int price2;
    int day;
    char f1;
    char f2;
    char size1;
    char size2;
    std::cout << "Enter day of the week: ";
    std::cin >> day;
    std::cout << "Enter first pizza flavour (c/b/v/p/a): ";
    std::cin >> f1;
    std::cout << "Enter first pizza size (s/m/l): ";
    std::cin >> size1;
    std::cout << "Enter second pizza flavour (c/b/v/p/a): ";
    std::cin >> f2;
    std::cout << "Enter second pizza size (s/m/l): ";
    std::cin >> size2;
    std::cout << "You ordered: " << std::endl;

    switch(f1) {
        case 'c':
        if (size1 == 's') {
            std::cout << "- Small Chicken Pizza: 800 PKR" << std::endl;
            price1 = 800;
            break;
        } else if (size1 == 'm') {
            std::cout << "- Medium Chicken Pizza: 1000 PKR" << std::endl;
            price1 = 1000;
            break;
        } else if (size1 == 'l') {
            std::cout << "- Large Chicken Pizza: 1200 PKR" << std::endl;
            price1 = 1200;
            break;
        }
        case 'b':
        if (size1 == 's') {
            std::cout << "- Small Beef Pizza: 900 PKR" << std::endl;
            price1 = 900;
            break;
        } else if (size1 == 'm') {
            std::cout << "- Medium Beef Pizza: 1100 PKR" << std::endl;
            price1 = 1100;
            break;
        } else if (size1 == 'l') {
            std::cout << "- Large Beef Pizza: 1300 PKR" << std::endl;
            price1 = 1300;
            break;

        }

        case 'v':
        if (size1 == 's') {
            std::cout << "- Small Vegetarian Pizza: 700 PKR" << std::endl;
            price1 = 700;
            break;
        } else if (size1 == 'm') {
            std::cout << "- Medium Vegetarian Pizza: 900 PKR" << std::endl;
            price1 = 900;
            break;
        } else if (size1 == 'l') {
            std::cout << "- Large Vegetarian Pizza: 1100 PKR" << std::endl;
            price1 = 1100;
            break;
       
    }
        case 'p':
            if (size1 == 's') {
                std::cout << "- Small Plain Pizza: 600 PKR" << std::endl;
                price1 = 600;
                break;
            } else if (size1 == 'm') {
                std::cout << "- Medium Plain Pizza: 800 PKR" << std::endl;
                price1 = 800;
                break;
            } else if (size1 == 'l') {
                std::cout << "- Large Plain Pizza: 1000 PKR" << std::endl;
                price1 = 1000;
                break;
            }

        case 'a':
        if (size1 == 's') {
            std::cout << "- Small Assorted Pizza: 1000 PKR" << std::endl;
            price1 = 1000;
            break;
        } else if (size1 == 'm') {
            std::cout << "- Medium Assorted Pizza: 1200 PKR" << std::endl;
            price1 = 1200;
            break;
        } else if (size1 == 'l') {
            std::cout << "- Large Assorted Pizza: 1400 PKR" << std::endl;
            price1 = 1400;
            break;
        }
    }

        switch(f2) {
        case 'c':
        if (size2 == 's') {
            std::cout << "- Small Chicken Pizza: 800 PKR" << std::endl;
            price2 = 800;
            break;
        } else if (size2 == 'm') {
            std::cout << "- Medium Chicken Pizza: 1000 PKR" << std::endl;
            price2 = 1000;
            break;
        } else if (size2 == 'l') {
            std::cout << "- Large Chicken Pizza: 1200 PKR" << std::endl;
            price2 = 1200;
            break;
        }
        case 'b':
        if (size2 == 's') {
            std::cout << "- Small Beef Pizza: 900 PKR" << std::endl;
            price2 = 900;
            break;
        } else if (size2 == 'm') {
            std::cout << "- Medium Beef Pizza: 1100 PKR" << std::endl;
            price2 = 1100;
            break;
        } else if (size2 == 'l') {
            std::cout << "- Large Beef Pizza: 1300 PKR" << std::endl;
            price2 = 1300;
            break;

        }

        case 'v':
        if (size2 == 's') {
            std::cout << "- Small Vegetarian Pizza: 700 PKR" << std::endl;
            price2 = 700;
            break;
        } else if (size2 == 'm') {
            std::cout << "- Medium Vegetarian Pizza: 900 PKR" << std::endl;
            price2 = 900;
            break;
        } else if (size2 == 'l') {
            std::cout << "- Large Vegetarian Pizza: 1100 PKR" << std::endl;
            price2 = 1100;
            break;
       
    }
        case 'p':
            if (size2 == 's') {
                std::cout << "- Small Plain Pizza: 600 PKR" << std::endl;
                price2 = 600;
                break;
            } else if (size2 == 'm') {
                std::cout << "- Medium Plain Pizza: 800 PKR" << std::endl;
                price2 = 800;
                break;
            } else if (size2 == 'l') {
                std::cout << "- Large Plain Pizza: 1000 PKR" << std::endl;
                price2 = 1000;
                break;
            }

        case 'a':
        if (size2 == 's') {
            std::cout << "- Small Assorted Pizza: 1000 PKR" << std::endl;
            price2 = 1000;
            break;
        } else if (size2 == 'm') {
            std::cout << "- Medium Assorted Pizza: 1200 PKR" << std::endl;
            price2 = 1200;
            break;
        } else if (size2 == 'l') {
            std::cout << "- Large Assorted Pizza: 1400 PKR" << std::endl;
            price2 = 1400;
            break;
        }
    }
    if (day==1) {
        if (f1 == 'c' && size1 == 'm'){
            if (f2 == 'c' && size2 == 's')
                price2=0;
                std::cout << "Monday Deal Applied : Buy 1 Medium Chicken Pizza , get 1 Small Chicken Pizza free." << std::endl;
        }
    } else if (day==2) {
        if (size1 == 'l' && size2 == 'l'){
            price2=0;
            std::cout << "Tuesday Deal Applied: Buy 1 Large Pizza (any flavor), get 1 free (same flavor and size)." << std::endl;
        }
    } else if (day==3) {
        if (size1 == 's' && size2 == 's'){
            price1*=0.2;
            price2*=0.2;
            std::cout << "Wednesday Deal Applied: Buy 2 Small Pizzas (any flavors), get 20% of." << std::endl;
        }
    } else if (day==4) {
        if (f1 == 'b'){
            if (size2 == 's' && f2 == 'p')
            price2=0;
            std::cout << "Thursday Deal Applied: Buy 1 Beef Pizza of any size, get 1 Small Plain Pizza free." << std::endl;
        }
    } else if (day==5) {
        if (f1 == 'a' && size1 == 'l'){
            if (size2 == 'm' && f2 == 'v')
            price2=0;
            std::cout << "Friday Deal Applied: Buy 1 Large Assorted Pizza, get 1 Medium Vegetarian Pizza free." << std::endl;
        }
    } else if (day==6) {
        std::cout << "No Deal." << std::endl;
        
    } else if (day==7) {
        if (size1 == 'm'){
            if (size2 == 's' && f2 == 'v')
            price2=0;
            std::cout << "Sunday Deal Applied: Buy 1 Medium Pizza (any flavor), get 1 Small Vegetarian Pizza free." << std::endl;
        }

    

}
    std::cout << "Final Bill: " << price1 + price2 << " PKR";
    return 0;
}
