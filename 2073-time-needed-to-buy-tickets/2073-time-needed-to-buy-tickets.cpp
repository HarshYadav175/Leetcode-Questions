class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
                int n=tickets.size();
        int time=tickets[k];
        for(int i=0;i<tickets.size();i++){
        //Elements infront of target
              //If they are smaller or equal to target value collect them whole 
              //If they are greater collect target value
        if(i<k){
            if(tickets[i]<=tickets[k]){
                time+=tickets[i];
            }
            else{
                time+=tickets[k];
            }
        }
        //Elements behind target
              //If they are smaller than target value collect them whole 
              //If they are greater collect (target-1) value
        else if(i>k){
            if(tickets[i]<tickets[k]){
                time+=tickets[i];
            }
            else{
                time+=(tickets[k]-1);
            }
        }
    }
    return time;
}
    
};