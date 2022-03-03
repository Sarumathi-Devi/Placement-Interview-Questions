
class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  
    {
        int i;
        unordered_set < int > us;
        for ( i = 0; i < n; i++ ) us.insert(a[i]);
        for ( i = 0; i < m; i++ ) us.insert(b[i]);
        
        return us.size();
    }
};
int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)  cin >> a[i];
	    for(int i = 0;i<m;i++)  cin >> b[i];
      
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	}
	return 0;
}  
