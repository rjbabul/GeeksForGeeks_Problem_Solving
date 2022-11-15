


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n)
{
     int a[27];
     a[1]= 2; a[2]=2;a[3]=2;a[4]=3; a[5]=3;a[6]=3;
     a[7]=4; a[8]=4;a[9]=4; a[10]=5; a[11]=5;a[12]=5;
      a[13]=6;a[14]=6;a[15]=6;
       a[16]=7;a[17]=7;a[18]=7; a[19]=7;
       a[23]=9;a[24]=9;a[25]=9; a[26]=9;
       a[20]=8; a[21]=8;a[22]=8;
       string str;
       for(int i=0;i<n;i++)str+=(char)(a[s[i]-'a'+1]+48);

       return str;

}
