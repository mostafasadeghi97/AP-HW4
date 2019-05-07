
#include<iostream>
#include<utility>
#include <functional>
#include<algorithm>
#include<numeric>
#include<string>
#include<set>


//================= MOSTAFA SADEGHI   9423067 ================



class myclass {
public:
	myclass(double a): n{a} {}
	bool operator() (int i,int j) { return (std::abs(i-n)<std::abs(j-n));}
private:
	double n;
};


bool IsGreaterThan3(int i) 
{ 
    return (i > 3); 
} 
  

int main() { 
	

	//-------------------alef---------------------------
	
	std::vector<int> myarray{1,2,3,4,5,4,3,2,1};
	std :: vector <int>::iterator pend; 
    pend = std :: remove (myarray.begin(), myarray.end() , 2);
	for ( std :: vector<int> :: iterator p=myarray.begin(); p != pend; ++p) 
        std :: cout << *p << " "; 

	std::cout << std::endl;
	

	//-------------------b-----------------------------
	myarray=  {1,2,3,4,5,4,3,2,1};
    int myconstant{2};
	std::transform(myarray.begin(), myarray.end(), myarray.begin(), [myconstant](auto& c){return c*myconstant;});
	for(auto a:myarray){
		std::cout << a << " ";
	}
	std::cout << std::endl;


	//--------------------c---------------------------
	myarray=  {1,2,3,4,5,4,3,2,1};
	double average = accumulate( myarray.begin(), myarray.end(), 0.0)/myarray.size();
	// std::cout << average << std::endl;
	std::sort(myarray.begin(), myarray.end(), myclass{average});
	for(auto a:myarray){
		std::cout << a << " ";
	}
	std::cout << std::endl;



	// -----------------------d--------------------
	std::sort(myarray.begin(),myarray.end());
	std::set<int> fooSet( myarray.begin(), myarray.end() );
	for(auto a:fooSet){
		std::cout << a << " ";
	}
	std::cout << std::endl;


	//--------------------------e-----------------------
	std::set<int>:: iterator it; 
	it=fooSet.upper_bound(3);
    fooSet.erase(it,fooSet.end());
	// 
	for(std::set<int>::iterator it1=fooSet.begin(); it1!=fooSet.end(); ++it1)
      std::cout<< *it1 << " ";
	std::cout << std::endl;
	return 0;
} 
