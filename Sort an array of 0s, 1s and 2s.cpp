

void sort012(int arr[], int n)
{
    int a[3];memset(a,0,sizeof(a));
    for(int i=0;i<n;i++) a[arr[i]]++;
    int j=0;
    for(int i=0;i<3;i++)while(a[i]>0){
       arr[j++]= i; a[i]--;
    }

}
