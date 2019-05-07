
#include<iostream>
#include<utility>
#include <functional>
#include<algorithm>
#include<string>
#include<set>
#include<random>

//================= MOSTAFA SADEGHI   9423067 ================


  

int main() { 
	


	std::srand(time(NULL)); 
	std::vector<int> a(50);
	std::vector<int> b(50);
	for (size_t i = 0; i < 50; i++)
	{
		b[i]=(std::rand()%(50) +1);
	}

	std::cout << "b before remove duplicates: ";
	for(auto a:b){
		std::cout << a << " ";
	}
	std::cout << std::endl << "b after remove duplicates: ";

	
	std::set<int> cc( b.begin(), b.end() );
	for(auto a:cc){
		std::cout << a << " ";
	}
	std::cout << std::endl;
	std::set<int> dd;
	while (true)
	{
		if (dd.size() == 50)
		{
			break;
		}
		dd.insert(std::rand()%(150)+1);
		
	}

	std::cout << "c: ";
	for(auto a:dd){
		std::cout << a << " " ;
	}
	std::cout << std::endl;

	std::vector<int> qq(cc.begin(), cc.end());
	std::vector<int> qq2(dd.begin(), dd.end());
	
	int myconstant{2};
	std::transform(qq.begin(), qq.end(), qq.begin(), [myconstant](auto& c){return std::pow(c,myconstant);});
	std::transform(qq2.begin(), qq2.end(), qq2.begin(), [myconstant](auto& c){return std::pow(c,myconstant);});

	double sum1 = accumulate( qq.begin(), qq.end(), 0.0);
	double sum2 = accumulate( qq2.begin(), qq2.end(), 0.0);
	std::cout << "sigma (b^2-c^2) = " << sum2 - sum1 << std::endl;

	return 0;
} 
