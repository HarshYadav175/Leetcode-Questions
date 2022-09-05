class Solution
{
	public:
	bool isValid(string x)
	{
		stack<char> s;
		for(int c: x)
		{
			if(c=='('||c=='['||c=='{')
			{
				s.push(c);
			}
			else
			{

				if(s.empty()) return 0;

				char val = s.top();
                
				s.pop();

				if(c==')' && val!='(') return 0;

				if(c==']' && val!='[') return 0;

				if(c=='}' && val!='{') return 0;
		}
	}

if(s.size()==0) return 1;

else return 0;
}
};