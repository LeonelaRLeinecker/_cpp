#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iostream>
# include <cctype>

class Harl {
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
	int getLogLevelIndex(std::string level);
	void harlFilter(std::string level);
};
#endif