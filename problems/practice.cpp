    int PlayingDisks(int input1_size, int* input1)
    {
    //input1_size=3  input1={3,1,2}
    int  j= input1_size-1; //2
    while(j > 0 && input1[j-1] < input1[j]) --j;  // 1<2
    
        if (j == 0) return 0;   
        int min_val = input1[j], v_1 = input1[j-1];   //min_val=2 , v_1=1
        j -= 2;
            while(j >= 0) {
                    if (input1[j] < min_val) {      //3<2,
                        min_val = input1[j];       //2
                  } else if (input1[j] < v_1) { //3<1
                        v_1 = input1[j];
                  }
            --j;
            }
        
        int count_smaller = 0;
        for(j = 0; j < input1_size; ++j) {
            if (input1[j] < v_1) ++count_smaller;
            }
            return input1_size- count_smaller;
}

    