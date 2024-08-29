int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int> > pq;
    while(n--)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x == 0)
        {
            int a;
            cin>>a;
            pq.push(a);
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else cout << pq.top()<<endl;
        }
        else if(x == 1)
        {
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else cout << pq.top()<< endl;
        }
        else if(x == 2)
        {
            pq.pop();
            if(pq.empty())
            {
                cout << "Empty" << endl;
            }
            else cout << pq.top()<< endl;
        }
    }
    return 0;