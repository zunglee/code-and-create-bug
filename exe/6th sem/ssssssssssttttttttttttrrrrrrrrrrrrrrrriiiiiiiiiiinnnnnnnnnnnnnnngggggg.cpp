    #include<iostream>
    #include<algorithm>
    #include<string>
    using namespace std;
    int main()
    {
    int k,n;
    cin>>k>>n;
    string a[k];
    for(int i=0;i<k;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
     
    string s;
    cin>>s;
    int n=s.size();
    int flag=0;
     
    for(int j=0;j<k;j++)
    {
    int found=s.find(a[j]);
    if (found!=string::npos)
    {
    flag=1;
    break;
    }
    else if(n>=47)
    {
    flag=1;
    break;
    }
    }
     
    if(flag==1)
    cout<<"Good"<<endl;
    else
    cout<<"Bad"<<endl;
    }
    return 0;
    } 
