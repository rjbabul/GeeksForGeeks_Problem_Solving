


int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  vector<int> vt;
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++)vt.push_back(mat[i][j]);
  }
  sort(vt.begin(), vt.end());
  return vt[k-1];
}
