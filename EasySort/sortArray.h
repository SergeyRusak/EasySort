struct sortdist {
	SortCore* next;
	std::string name;
};
template <class T>
struct sortArray {
	std::vector<T> criteria;
	std::vector<sortdist> route;
};