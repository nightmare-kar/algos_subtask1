#include<iostream.h>
#include<string.h>
void com(int &a[ ],int item)
{
int n = strlen(a);
int found=0;
for(int i=0;i<n;i++)
 {
  if(a[i]>item)
   {
   a[i]-=item;
   found=1;
   break;
   }
 }
 if(found==0)
  cout<<"no curtains available";
}
void main()
{
  int b[ ];int n,item;
  char ans='y';
  cout<<"enter the total number of pieces in curtain";
  cin>>n;
  cout<<"enter th lenghts of curtain";
  for(int i=0;i<n;1++)
  {
   cin>>b[i];}
   while(ans=='y')
   {
   cout<<"enter the length of item needed";
   cin>>item;
   com(b,item);
   for(i=0;i<n;i++)
   {
    cout<<b[i];
   }
   cout<<"if u want to continue enter y ";
   cin>>ans;
   }
}
