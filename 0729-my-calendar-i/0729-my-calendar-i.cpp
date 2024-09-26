class MyCalendar {
    set<pair<int, int>>bookings;
public:    
    bool book(int s1, int e1) {
        auto slot = bookings.lower_bound({s1, e1});
        if( slot != end(bookings)   && !(slot -> first >= e1) ||      
            slot != begin(bookings) && !(prev(slot) -> second <= s1)) 
			    return false;        
        bookings.insert({s1, e1});
        return true;
    }
};
