    #include<iostream>
    #include<cstdio>
    #include<cmath>
    #include<cstring>
    #include<stdlib.h>
    #include<algorithm>
    #include<iomanip>
    #include<set>
    #include<vector>
    #include<utility>
    #include<stack>
    #define getcx getchar_unlocked
    #ifndef ONLINE_JUDGE
    #define getcx getchar
    #endif
    //#define mod 1000000007
    #define rep(i,n) for(int i=0;i<n;++i)
    #define rep1(i,j,n) for(int i=j;i<n;++i)
    #define repl1(i,j,n) for(long long i=j;i<n;++i)
    #define repl(i,n) for(long long i=0;i<n;++i)
    #define ll long long
    using namespace std;
    ll multiply(ll a,ll b,ll mod)
    {
    	if(b==1)
    	return a%mod;
    	else if(b==0)
    	return 0;
	    else if(b%2==0)
	    return (2*multiply(a,b/2,mod))%mod;
	    else
	    return (a+multiply(a,b-1,mod))%mod;
    }
    ll pow(ll base,ll pow,ll mod)
    {
	    base%=mod;
	    ll res=1;
	    while(pow)
	    {
		    if(pow%2==1)
		    res=(res*base)%mod;
		    base=(base*base)%mod;
		    pow/=2;
	    }
	    return res;
    }
   ll b1[2000],k[2002],l[2000]; 
    main()
    {
    	//freopen("in.txt","r",stdin);
	    ios_base::sync_with_stdio(0);
	    int t,n,count;
	    ll add,b,a,mul,c;
	    char s[2000];
	    //cin>>t;
	    scanf("%d",&t);
	    while(t--)
	    {
		    scanf("%d",&n);
		    //cin>>n;
		    for(int i=0;i<n;++i)
		    scanf("%lld",&l[i]);
		    //cin>>l[i];
		    scanf("%lld%lld%lld",&a,&b,&c);
		    // cin>>a>>b>>c;
		    scanf("%s",&s);
		    //cin>>s;
		    a%=c;
		    b%=c;
		//    cout<<a<<" "<<b<<endl;
		    for(int i=0;i<n;++i)
	    	l[i]%=c;
	    	if(strlen(s)>=1)
	    	{
		    	if(s[0]=='R')
		    	{
		    		b1[0]=1LL;
		    		k[0]=0LL;
		    		reverse(l+0,l+n);
		    	}
		    	else if(s[0]=='A')
		    	{
		    		b1[0]=1LL;
		    		k[0]=a;
		    	}
		    	else
		    	{
		    		b1[0]=b;
		    		k[0]=0LL;
		    	}
		    }
	    	for(int i=1;i<n;++i)
	    	{
	    		if(s[i]=='R')
			    {
			    	reverse(l+i,l+n);
			    	b1[i]=b1[i-1];
			    	k[i]=k[i-1];
			    }
			    else if(s[i]=='A')
			    {
					b1[i]=b1[i-1];
					k[i]=k[i-1]+a;
					b1[i]%=c;
					k[i]%=c;
			    }
			    else
			    {
			   	 	b1[i]=multiply(b1[i-1],b,c);
			   	 	k[i]=multiply(k[i-1],b,c);
					b1[i]%=c;
					k[i]%=c;			   	 	
			    }
	    	}
	   /* 	for(int i=0;i<n;++i)
	    	cout<<b1[i]<<" ";
	    	cout<<endl;
	    	for(int i=0;i<n;++i)
	    	cout<<k[i]<<" ";
	    	cout<<endl;*/
	    	for(int i=0;i<n;++i)
	    	{
	    		l[i]=multiply(l[i],b1[i],c);
	    		l[i]+=(k[i]%c);
	    		l[i]%=c;
	    		printf("%lld ",l[i]);
	    	}
	    	printf("\n");
	    	//cout<<l[i]<<" ";
	    	//cout<<endl;
	    }
    } 