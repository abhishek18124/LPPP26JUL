// every operation (insert, erase, find, ...) on a map<> takes logn times

#include<iostream>
#include<map>

using namespace std;

int main() {

	map<string, string> capitalMap;

	capitalMap.insert({"India", "Kolkata"});

	capitalMap["India"] = "New Delhi";
	capitalMap["Japan"] = "Tokyo";
	capitalMap["Russia"] = "Moscow";
	capitalMap["Russia"] = "St. Petersberg";
	capitalMap["Ukraine"] = "Kiev";
	capitalMap["Ukraine"] = "Kharkiv";

	cout << capitalMap.size() << endl;

	for (pair<string, string> p : capitalMap) {
		string countryName = p.first;
		string capitalName = p.second;
		cout << countryName << " " << capitalName << endl;
	}

	cout << endl;

	for (auto [countryName, capitalName] : capitalMap) {
		cout << countryName << " " << capitalName << endl;
	}

	cout << endl;

	capitalMap.erase("Ukraine");

	for (auto [countryName, capitalName] : capitalMap) {
		cout << countryName << " " << capitalName << endl;
	}

	cout << endl;

	capitalMap["Pakistan"] = "Islamabad";

	for (auto [countryName, capitalName] : capitalMap) {
		cout << countryName << " " << capitalName << endl;
	}

	cout << endl;

	capitalMap["Pakistan"] = "Lyari";

	for (auto [countryName, capitalName] : capitalMap) {
		cout << countryName << " " << capitalName << endl;
	}

	cout << endl;

	capitalMap.erase("Pakistan");

	for (auto [countryName, capitalName] : capitalMap) {
		cout << countryName << " " << capitalName << endl;
	}

	cout << endl;

	cout << capitalMap["India"] << endl;
	cout << capitalMap["Japan"] << endl;

	if (capitalMap.find("Pakistan") != capitalMap.end()) {
		cout << capitalMap["Pakistan"] << endl;
	} else {
		cout << "Pakistan doesn't exist" << endl;
	}

	if (capitalMap.find("USA") != capitalMap.end()) {
		cout << capitalMap["USA"] << endl;
	} else {
		cout << "USA doesn't exist" << endl;
	}

	if (capitalMap.count("USA")) {
		cout << capitalMap["USA"] << endl;
	} else {
		cout << "USA doesn't exist" << endl;
	}


	return 0;

}