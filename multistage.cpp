#include<bits/stdc++.h>
using namespace std;
int multi(vector<vector<int> > items)
{
        int n=items.size();
        int parent[n],dist[n];
        for(int i=0;i<n;i++)
        {
                dist[i]=INT_MAX;
        }
        dist[n-1]=0;
        for(int i=n-1;i>=0;i--)
        {
                for(int j=i;j<items[i].size();j++)
                {
                        if(items[i][j]==-1)
                        {
                                continue; 
                        } 
                        dist[i]=min(dist[i],items[i][j]+dist[j]);
                }
        }
        return dist[0];
}
     
int main()     
{     
        int n;
        cout<<"\nenter no of vertices : ";
        cin>>n;

        vector<vector<int> > items;
        int k;
     
        for (int i =0;i<n;i++)
        {
                items.push_back(vector<int>());     
                for (int j=0;j<n;j++)
                {
                        cout<<"\nenter weight : ["<<i<<"]"<<"["<<j<<"]"<<" = ";
                        cin >> k;
                        items[i].push_back(k);
                }
        }
     
        for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                        cout<< items[i][j]<<"\t\t";
                        
                }cout<<endl;
        }
        cout<<"\nshorest dist : "<<multi(items);
    return 0;
     
    }
   
