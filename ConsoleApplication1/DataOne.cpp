#include <iostream>
#include <string>

using namespace std;


class incapsulation {


private:
	 static string obj;
	
public:
	 static void setObject(string objc) {
	 obj.assign(objc);
	}

	 static string getObject() {
		return obj;
	}
};        
