# Mini Spreadsheet 10x10

***This program is similar to excel, you can view the sheet, edit, find the max & min value, sum row / column etc. please read the entire documentation to see how the program works***

## Menu

1. **View sheet**
   * You can view your sheet by inputting value "1" and press enter. default value of each row and column will be 0 (
     since it hasn't been inputted yet
3. **Print sheet**
   * You can save your sheet to .txt files and print if you want by inputting value "2" and press enter. 
4. **Menu Function**
   * This is the main feature, where you can input value, edit, sum, etc. You can access this feature by inputting value "3" and press enter. please read the following documentation to use this feature properly
   
## Documentation (how to use function)

1. *Sum function*
~~~
sum(A1,A10) // this command will add up the values from cells A1 - A10
~~~

2. *Set function*
~~~
set(A1,1) // add value "1" to the cell A1
~~~

3. *Del function*
~~~
del(A1) // delete the value from cell A1
~~~

4. *Search function*
~~~
search(10) // search for value 10, if the value was found return the cell position, otherwise return -1 
~~~

5. *Sort function*
~~~
sort(A,1) // sort column A from the smallest to largest (ascending)
sort(A,0) // sort column A from the largest to smallest (descending)
sort(1,1) // sort row 1 from the smallest to largest (ascending)
~~~

6. *Mean function*
~~~
mean(A) // calculate the mean value from column A
mean(1) // calculate the mean value from row 1
~~~

7. *Min & Max function*
~~~
min(1) // search the smallest value from row 1
max(A) // search the largest value from column A
~~~
   
## Screenshot
***You have to run this program into your IDE, and it will display in the command line. it will display like this***

### 1. View Sheet
![Tampilan_View](https://i.ibb.co/6b0DLnD/function.jpg)

### 2. Function
![Tampilan_Function](https://i.ibb.co/fr0tNyr/view.jpg)

## AUTHOR
**Aditya Fajri**
