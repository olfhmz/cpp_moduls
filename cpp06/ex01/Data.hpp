#ifndef DATA_H
# define DATA_H

# include <string>

class Data {

private:
	std::string _someData;

public:
	Data();

	Data(const Data &rhs);

	Data &operator=(const Data &rhs);

	~Data();
	void setData(std::string str);
	std::string getData();
};


#endif
