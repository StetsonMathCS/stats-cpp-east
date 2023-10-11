indef STATS_MIN_H
#define STATS_MIN_H

#inclide <vector>

class stats_min{

	public:
		stats_min();
		void add(double value);
		double get_min();
		void reset();


	private:
		double min;



};

#endif
