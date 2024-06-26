/*!
 * Functions to compute the load
 * @author Sébastien Allgeyer
 * @date 26/2/21
 *
 */

#pragma once

#include <string>
#include <vector>


class loading {
public:
	loading();
	loading(std::string);
	~loading(){};
	void set_name(std::string name);
	void read();
	double interpolate_gz(double);
	double interpolate_gh(double);

private:
	std::string fileName;
	int n_green;
	std::vector<double> dist;
	std::vector<double> Gz;
	std::vector<double> Gh;

};

