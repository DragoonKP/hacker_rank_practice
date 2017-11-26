    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    for( int i = n-1 ; i >=0 ; i--) {
       // cout << i << endl; 
        cout << arr[i] << " " ; 
    }
    
   /*reverse(arr.begin(),arr.end());    // 9 8 7 6 5 4 3 2 1
    for( int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ; 
    }
    */