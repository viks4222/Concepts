int findTheCulprit(vector < int > input1,vector < int > input2,int input3)
{
    //vector<int>::iterator it ;
    for(int i=0; i<input1.size();i++)
    {
        if (input1.at(i)==input3)
        {
                return 1;
        }
    }

    for(int i=0; i<input2.size();i++)
    {
        if (input2.at(i)==input3)
        {
                return 2;
        }
            else return -1;
    }
}
