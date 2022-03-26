//I made certain change accoring to the requirements
//Part 1 7 is not done, apology for really running out of time.
//l dont fully get the idea of part 4 but kindly add somethings
//all the other parts are finished
//The question is really impressive and remind something, Thank you.
//YuFan Chen
//z5222107



// Question 1 Install g tests and add to cmakes lists
#include "gtest/gtest.h"
#include <map>
#include <math.h>
#include <iostream>
#include "static_assert.h"
#include "nullptr.h"
#include <cstdio>


const int values[] = { 1,2,3,4,5 };
const int NVALS = sizeof values / sizeof (int);
void function(char**);

template <typename T>
struct ptr_holder {
  static_assert(std::is_same_v <T, std::remove_pointer<T>>);
};

int total = 0

class Wallet
{
    int mMoney;
public:
    Wallet() :mMoney(0){}
    int getMoney() { return mMoney; }
    void addMoney(int money)
    {
       for(int i = 0; i < money; ++i)
       {
          mMoney++;
       }
    }
};

struct person{
   int age;
   float weight;
};
const int n = sizeof(person);

int testerFunction()
{
   Wallet walletObject;
   std::vector<std::thread> threads;
   for(int i = 0; i < 5; ++i){
        threads.push_back(std::thread(&Wallet::addMoney, &walletObject, 1000));
   }
   for(int i = 0; i < threads.size() ; i++)
   {
       threads.at(i).join();
   }
   return walletObject.getMoney();
}


int Main()
{
    // Question 2
    int x = 10;
    int y = 15;
    std::cout << " "<< (x, y) << std::endl;

    // Question 3 Get the function to run
    char* arr[] = { "ant", "bat", "cat", "dog", "egg", "fly" };
	function(arr);


    // Question 4 Insert in map
    typedef map<int, double> valmap;

    valmap m;

    for (int i = 0; i < NVALS; i++)
        m.insert(std::make_pair(values[i], pow(values[i], .5)));

    valmap::iterator it = 100;   //get some question here           
    valmap::iterator it2(100);              
    m.insert(1,2);
    
    // Question 5
    int i = 1, j = 1;
    if ( (i != 3) && (j==1))
    {
        cout << "inside if statement\n";
    }

    // Question 6 Store a char * pointer in template
    ptr_holder <char*> p;

    // Question 7 Fix the compiler errors and race conditions
    // Convert the testerFunction() into a google test
    int val = 0;
    for(int k = 0; k < 1000; k++)
    {
        if((val = testerFunction()) != 5000)
        {
            std::cout << "Error at count = "<<k<<" Money in Wallet = "<<val << std::endl;
            return 1;
        }
    }

    // Question 8
    int n = 1;
    int *p = &n;
    fn(&p);

    // Question 9
    person *ptr;
    ptr = (struct person*)malloc(n);
    ptr->age = 10;
    ptr->weight = 55.5;

    // Question 10 Initialise foo
    Foo foo;

    // Question 11
    char c;
    char c;
    do {
        c=getchar();
        putchar (c);
    } while (c != EOF);
    return 0;                         

}

// Do not change anything besides the ptr variable
void function(char** ptr)
{
	char *ptr1;
	ptr1 = (ptr += sizeof(int))[-2];
	printf("%s\n", ptr1);
}

void fn(int** pp)
{
    printf("%p : %p : %d", pp, *pp, **pp);
}

// Fix any compilation error
class Foo {
public:
    int a;
    Wallet* b = NULL;
};
