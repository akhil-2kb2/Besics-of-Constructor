#include<iostream>
using namespace std;
class Pattern2
{
        private:
                int i,j;
        public:
                void Patt2()
        {
                for(i=1;i<=5;i++)
           {
                  for(j=1;j<=5;j++)
              {
                      if(j>=6-i){cout<<"*";}
                      else{cout<<" ";}
              }
                cout<<"\n";
           }
        }
};
int main()
{
        Pattern2 c1;
        c1.Patt2();
        cout<<"Hi All!"<<endl;
        cout<<"What is the output of the above code?"<<endl;
        return 0;
}