
int findK(int A[MAX][MAX], int n, int m, int k)
{


   int s=n*m,cnt=0;
 vector<int>vt;
 int i=-1,j=-1;
 bool visit[n+1][m+1];
 memset(visit,0,sizeof(visit));

 for( ; cnt<s;){
    i++, j++;

    for(;j<m  &&   visit[i][j]==0;j++){
        vt.push_back(A[i][j]);

        visit[i][j]=1;
        cnt++;
    }
    j--;
    i++;

    for(;i<n &&  visit[i][j]==0;i++){
        vt.push_back(A[i][j]);

        visit[i][j]=1;
        cnt++;
    }
    i--;
    j--;

    for(;j>=0 &&  visit[i][j]==0;j--){
        vt.push_back(A[i][j]);
        visit[i][j]=1;
        cnt++;
    }

    j++;
    i--;
    for(;i>=0 &&  visit[i][j]==0;i--){
        vt.push_back(A[i][j]);

        visit[i][j]=1;
        cnt++;
    }

 }

  return vt[k-1];

}
