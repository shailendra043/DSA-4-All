void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
 
    cout <<"Following activities are selected "<< endl;
    i = 0;
    cout <<" "<< i;
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          cout <<" " << j;
          i = j;
      }
    }
}
