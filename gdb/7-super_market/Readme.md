## 15 sep 2024 ; Topic : Mini project Supermarket


WAP - for the 4 departments of a supermarket : Sales, Purchase, Stock and main in four different source code files.

stock.c : Maintains a variable for available stock.

sales.c : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling, check if enough stock is available.

purchase.c : Has one function : Purchase – will increase the stock by the number of items purchased. Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.

main.c : Display menu with choices:

1 ) Check AvailableStock
2 ) Purchase new items
3) Sell items … this should be continuous as long as the user wants to continue.
4) Quit
Program should stop when the user wants to quit.


#Sample output:


Welcome to the SUPERMARKET



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : gjhfggj

Error!!! Invalid Input



Enter 1/2/3/4 : 1

Checking Availability Stocks

Available Stocks : 0



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 2

Purchasing new item

Enter number of items to purchase: 600

Purchase is not successful

Stock room is available for purchasing 500 items only



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 2

Purchasing new item

Enter number of items to purchase: 400

400 items are purchased successfully



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 1

Checking Availability Stocks

Available Stocks : 400



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 3

Sell Items

Enter number of items to sell: 500

selling is not success

400 stocks are available to sell



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 3

Sell Items

Enter number of items to sell: 200

200 items sold successfully



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 1

Checking Availability Stocks

Available Stocks : 200



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 3

Sell Items

Enter number of items to sell: 250

selling is not success

200 stocks are available to sell



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 2

Purchasing new item

Enter number of items to purchase: 400

Purchase is not successful

Stock room is available for purchasing 300 items only



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 2

Purchasing new item

Enter number of items to purchase: 30

30 items are purchased successfully



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 2

Purchasing new item

Enter number of items to purchase: 500

Purchase is not successful

Stock room is available for purchasing 270 items only



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : 7567

Enter correct choice



1. Check Stock Availability

2. Purchase new Item

3. Sell Items

4. Quit

Enter Choice : @

Error!!! Invalid Input



Enter 1/2/3/4 : 4

Thank you for Shopping


