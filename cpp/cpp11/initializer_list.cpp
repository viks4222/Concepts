/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <initializer_list>

using namespace std;

class myArray{
        int *arr;
        int mlen;
    public:
        myArray(const initializer_list<int> &list):mlen(list.size())
        {
            int index = 0;
            arr = new int[mlen];
            for(auto val:list){
                arr[index] == val;
                index ++;
            }
        }

        void print()
        {
            for(int i=0; i<mlen; i++){
                cout<<arr[i]<<"\t";
            }
        }
};

int main()
{
    myArray m{4,6,4,67,4};
    m.print();
    return 0;
}
//
//#include <iostream>
//#include <initializer_list>
//
//using namespace std;
//
//class MyArray
//{
//  int *m_array;
//  int m_len;
//  int m_last;
//  public:
//  MyArray(int len):m_len(len) {
//    m_array=new int[m_len];
//  }
//  MyArray(const std::initializer_list<int> &list):m_len(list.size()) {
//    int index=0;
//    m_array=new int[m_len];
//    for(auto val:list) {
//      m_array[index]=val;
//      index++;
//    }
//    m_last=index;
//  }
//  void fill(const std::initializer_list<int> &list) {
//    //TODO: assert list.size() >= m_len
//    int index=0;
//    for(auto val:list)
//      m_array[index++]=val;
//  }
//  /*void append(const std::initializer_list<int> &list) {
//      //Applicable if underlying data set can be resized
//  }*/
//  void print()
//  {
//    for(int i=0;i<m_len;i++)
//      std::cout << m_array[i] << "\n";
//  }
//};
//int main()
//{
//  MyArray a1{10,20,30,40,50};
//  a1.print();
//  a1.fill({11,12,13,14,15});
//   a1.print();
//}
