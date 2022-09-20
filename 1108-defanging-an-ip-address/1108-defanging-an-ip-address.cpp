class Solution {
public:
    string defangIPaddr(string address) {
         for(int i=0;i<address.size();i++){
        if(address[i]=='.'){
            address.replace(i,1,"[.]",3);
            i+=2;
            continue;
        }
    }
    return address;
}  
    
};