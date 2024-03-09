#include <iostream>
using namespace std;
void Swap (int x ,int y)
{
    int temp = x;
    x= y;
    y=temp;
}
void SwapPointer (int* x ,int* y)
{
    int temp = *x;
    *x= *y;
    *y=temp;
}
void SwapReference (int& x ,int& y)
{
    int temp = x;
    x= y;
    y=temp;
}
bool IsEven(int num)
{
    if (num %2 == 0)
        return true;
    else
        return false;
}

int sum (int x , int y=6)
{
    int res = x + y ;
    return res;
}
int sum (int x , int y,int z)
{
    int res = x + y +z;
    return res;
}
double sum (double x, double y)
{
    return x +y ;
}
float sum (float x, float y)
{
    return x +y ;
}

struct Employee
{
    int age;
    string name;
};
int main()
{
/** Casting
    //casting
    int x = 5;
    // implicit casting (no lost)
    double Num = x;
    // explixit casting (Lost)
    int Num2 = (int)Num;
     */

/** Pass by Address & Pass By Reference
  // reference , pointers
    //int *p= &x;
    //p++;
    //cout << *p;
    // swap
    int Swap1 =6, Swap2=5;
    // pass by pointer
   // SwapPointer(&Swap1,&Swap2);
    //cout << Swap1 << endl << Swap2;


    // pass by reference
    //int &Ref = Swap1;
    //int &Ref2 = Swap2;
    //Ref = Ref2;
    //Ref = 8;
    //cout << Swap1;
    // pass by reference
    //SwapReference(Swap1,Swap2);
    //cout << Swap1 << endl << Swap2;
 */

 /** bool & string
   bool check = IsEven(6);
    if (check == true)
       cout << "Even"<<endl;
    else
        cout<<"Odd"<<endl;

    string asd = "asdasdasdasd";
    cout<< asd;
  */

  /**  functions
   // functions
  // default function

  int res = sum(4);
  int res = sum(4,7);
  int res = sum();

 // function Overloading
 int res = sum(5,7);
  double res2 = sum(4.2,8.6); // double
  float res3 = sum(4.4f,8.7f); // float
cout << res *10;
   */



 /** arrays
   int arr[3]; // static allocation
   arr[0]= 5;
   int * arrH = new int [4]; // dynamic allocation
   arrH[1]=8;
   *(arrH+1) = 9;

   int x = 4;
    int* arrP[4];  // array of pointers
    arrP[0] = arrH;
    arrP[1] = &x;
    arrp[0] = 8;
  */



    Employee emp;
    emp.name ="Ali";
    emp.age = 15;
    cout<<emp.name << endl << emp.age;

    Employee *empP = new Employee();
    empP->name = "Ahmed";
    empP->age= 18;
    cout<<empP->name << endl << empP->age<<endl;

    Employee emps[3];
    for  (int i=0 ; i<3; i++)
    {
        emps[i].name = "ASD";
        emps[i].age = 20;
    }
    for  (int i=0 ; i<3; i++)
    {
       cout<< emps[i].name <<endl ;
       cout<< emps[i].age <<endl;
    }

    Employee *empsP [3];
    empsP[0] = new Employee();
    empsP[0]->name = "Ali";
    //empsP[0]->age = 30;
    empsP[0] = &emp;


    cout<< empsP[0]->name <<endl ;
       cout<< empsP[0]->age <<endl;
    return 0;
}
