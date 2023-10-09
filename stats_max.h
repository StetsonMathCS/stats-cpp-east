#ifndef STATS_MAX_H
#define STATS_MAX_H

#iclude <vector>
class stats_max{
	public:
		stats_max();
		void add( double val);
		double get_max();
		void reset();
	private:
		double max;
};
#endif

