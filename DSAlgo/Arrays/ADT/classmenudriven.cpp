/* #include <iostream>
#include <stdio.h>
using namespace std;

//

class Array
{
    private:
        int *A;
        int size;
        int length;
        void swap(int *x, int *y);
    
    public:
        Array(){
            size=10;
            length=5;
            A = new int[size];
        }
        Array(int sz){
            size = sz;
            length=0;
            A = new int[size];
        }
        ~Array(){
            delete []A;
        }

        void Display();
        void Append(int x);
        void Insert(int index, int x);
        int Delete(int index);
        
        int LinearSearchMovetoHead(int key);
        //int RBinSearch(int a[], int l, int h, int key);
        int Get(int index);
        void Set(int index, int newValue);
        float Avg();
        void Max();
        void Min();
        int Total();
        int avgTotal();
        Array* Merge(Array *arr2);
        Array* Union(Array *arr2);
        Array* Intersection(Array *arr2);
        Array* Difference(Array *arr2);
};

void Array::Display()
{
    int i;
    cout << "Elements are\n";
    for (i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
}

//As it is going to modify the array so the struct call arr should be call by address type *arr.
//This function is used to store the element at the end of the array element.
void Array::Append(int x){
    if(length < size)
        A[length++]=x;
    else
        cout<<"Out of the block";
        //exit(0);
}

//To store the element x at the given index
void Array::Insert(int index, int x){
    int i length-1;
    if(index>=0 && index<=length)
    {
        for(i=length; i>index; i--)
            A[i]=A[i-1];

        A[index] = x;
        length++;
    }
    
}

int Array::Delete(int index){
    int i, x=0;
    
    if(index>=0 && index<length){
        x = A[index];
        for(i=index; i<length-1; i++)
            A[i]=A[i+1];
        
        length--;
        return x;   //To return the deleted element
    }
    return 0;
}

//Linear Search
void swap(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

int LinearSearch(int key){
    int i;
    for ( i = 0; i < length; i++)
    {
        if(key==A[i])
            return i;
    }
    return -1;
}


//Binary Search using Recursion

int Get(int index){
    //if(index>arr.length)
    if (index >= 0 && index < length)
        return A[index];
    else
        return -1;
}

void Set(int index, int newValue){
    if(index>length)
        cout<<"Index out of range"<<endl;
    else   
        A[index] = newValue;
}

float Avg(){
    float total=0, avg=0, count=0;
    for(int i=0; i<length; i++){
        total = total + A[i];
        count++;
    }   
    avg=total/count;
    return (float)avg;
}

void Max(){
    int max=A[0];
    for (int i = 1; i < aength; i++)
    {
        if(A[i] > max)
             max=A[i];
    }
    cout<<"Maximum of the array: "<<max<<endl; 
}

void Min(){
    int min=A[0];
    for (int i = 0; i < length; i++)
    {
        if(A[i]<min)
            min=A[i];
    }
   cout<<"Minimum of the array: "<<min<<endl;
}

int Total(){
    int total=0;
    for (int i = 0; i < length; i++)
    {
        total=total+A[i];
    }
    return total;
}

int avgTotal(){
    return (float )Total(arr)/length;
}

Array* Merge(Array arr2){
    int i=0, j=0, k=0;
    Array *arr3 = new struct Array(length+arr2.length);
    while (i < lenght && j < arr2.lenght){
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++];
        else
            arr3->A[k++] = arr2.A[j++];
    }
    for (; i< lenght; i++)
        arr3->A[k++] = A[i++];
    for(; j<arr2.lenght; j++)
        arr3->A[k++] = arr2.A[j++];
    
    arr3->lenght = arr1->lenght + arr2.lenght;

    return arr3;

};


Array *Union(struct Array *arr2){
    int i=0, j=0, k=0;
    struct Array *arr3 = new struct Array;
    while (i < lenght && j < arr2.lenght){
        if (A[i] < arr2.A[j])
        {
            arr3->A[k++] = A[i++];
        }
        else if (arr2.A[j] < A[i]){
            arr3->A[k++] = arr2.A[j++];
        }
        else {
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    for (; i< lenght; i++)
        arr3->A[k++] = A[i++];
    for(; j<arr2.lenght; j++)
        arr3->A[k++] = A[j++];
    
    arr3->lenght = k;


    return arr3;

};

//For sorted array, for Intersection
struct Array *Intersection(struct Array *arr2){
    int i=0, j=0, k=0;
    struct Array *arr3 = new struct Array;
    while (i < lenght && j < arr2.lenght){
        if (A[i] < arr2.A[j])
            i++;
        else if (arr2.A[j] < A[i])
            j++;
        else if (A[i] == arr2.A[j]){
            arr3->A[k++] = A[i++];
            j++;
        }
    }
    
    arr3->lenght = k;


    return arr3;

};


//For sorted array, for Difference A-B
struct Array *Difference(struct Array *arr1, struct Array *arr2){
    int i=0, j=0, k=0;
    struct Array *arr3 = new struct Array;
    while (i < lenght && j < arr2.lenght){
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++];
        else if (arr2.A[j] < A[i])
            j++;
        else {
            i++;
            j++;
        }
    }
    for (; i< lenght; i++)
        arr3->A[k++] = A[i++];
    
    arr3->lenght = k;

    return arr3;

};

int main()
{
    Array *arr1;
    int ch, sz;
    int x, index;
    cout<<"Enter Size of Array";
    scanf("%d", &sz);
    arr1 new Array(sz);
    do{
        cout<<"Menu\n";
        cout<<"1. Insert \n";
        cout<<"2. Delete \n";
        cout<<"3. Search \n";
        cout<<"4. Sum \n";
        cout<<"5. Display \n";
        cout<<"6. Exit \n";

        cout<<"Enter your choice ";
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            cout<<"Enter an element an index ";
            scanf("%d%d", &x, &index);
            arr1.Insert(index, x);
            break;
        case 2:
            cout<<"Enter index ";
            scanf("%d", &index);
            x=arr1.Delete(index);
            cout<<"Deleted Element is: "<<x;
            break;
        case 3:
            cout<<"Enter an element to search ";
            scanf("%d", &x);
            index = arr1.LinearSearchMovetoHead(x);
            cout<<"Element index: "<<index;
            break;
        case 4:
            cout<<"Sum of all the element of array: "<<arr1.Total();
            break;
        case 5:
            arr1.Display();
            
        }
    } while(ch<6);

    

    return 0;
} */

#include <iostream>
using namespace std;

template<class T>
class Array{
private:
    T * A;
    int size;
    int length;
public:
    Array()
    {
        size=10;
        length=0;
        A=new T[size];

    }
    Array(int size)
    {
        this->size=size;
        length=0;
        A=new T[size];

    }
    void insert(int index,T value){
        if(index>=0 && index<=size){
        for(int i=length;i>index;i--)
        {
            A[i]=A[i-1];
        }
        A[index]=value;
        length++;
        }
    }
    void append(T x){
        if(length<size)
        {
            A[length]=x;
            length++;
        }
    }
    
    void display(){
        for (int i = 0; i < length; i++){
            std::cout<<A[i] << " ";
        }
    }
    int l_search(T value)
    {
        for(int i=0;i<length;i++)
        {
            if(A[i]==value)
            {
                return i;
            }
        }
        return -1;
    }
    void deletion(int index)
    {
        if(index>=0 && index<=length)
        {
            for(int i=index;i<length-1;i++)
            {
                A[i]=A[i+1];
            }
            length--;
            std::cout<<"deleted index "<<index<<" element in array"<<std::endl;
        }    
    }
    T Sum()
    {
        T sum=0;
        for(int i=0;i<length;i++)
            sum=sum+A[i];
        return sum;
    }

    Array* Union(Array);

    ~Array()
    {
        delete []A;
    }
    
};
template<class T>
Array<T>* Array<T>::Union(Array<T> arr2)
{
    Array* arr3=new Array[10];
    int i=0,j=0,k=0,m=0;
    for(i=0;i<length;i++,k++)
        arr3->A[k]=A[i];
    for(i=0;i<arr2.length;i++)
        {
            int l=0,j=0;
            while(j<length)
            {
                if(arr2.A[i]==A[j])
                {
                    l=1;
                    break;
                }
                j++;

            }
            if(l==0)
                arr3->A[k++]=arr2.A[i];
        }
        arr3->length=k;
        arr3->size=100;
        return arr3;
    }



int main() {
    int i,sz;
    int x;
    cout<<"Enter size of array ";
    cin>>sz;
    Array<int> arr(sz);
    int ch;
    do{
        cout<<"\nMenu\n";
        cout<<"1.Append\n";
        cout<<"2.Insert\n";
        cout<<"3.Search\n";
        cout<<"4.Sum\n";
        cout<<"5.Display\n";
        cout<<"6.Delete\n";
        cout<<"7.Exit\n";

        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter element to appended\n";
                cin>>x;
                arr.append(x);
                break;

            case 2:
                cout<<"Enter element to be inserted\n";
                cin>>x;
                cout<<"Enter position of element\n";
                cin>>i;
                arr.insert(i,x);
                break;

            case 3:
                cout<<"Enter element to be searched\n";
                cin>>x;
                i=arr.l_search(x);
                if(i==-1)
                    cout<<"Element not found\n";
                else
                    cout<<"Element found at "<<i<<" position ";
                break;

            case 4:
                cout<<"Sum of array elements is "<<arr.Sum();
                break;

            case 5:
                arr.display();
                break;

            case 6:
                cout<<"Enter index at which elements will be deleted\n";
                cin>>i;
                arr.deletion(i);
                break;

        }
    }while(ch<7);

    Array<int> a2(10);
    a2.append(4);
    a2.append(5);
    a2.append(6);
    Array<int> *a3=arr.Union(a2);
    a3->display();

    return 0;
}