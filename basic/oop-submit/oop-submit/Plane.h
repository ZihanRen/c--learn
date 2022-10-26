class Plane { 
    public: 
        Plane(int);
    bool operator==(const Plane&);
    bool operator<(const Plane&);
    bool operator<=(const Plane&);
    int getSerialNumber() const;
    int getLength() const;
    
    private:
        int iSerialNumber;
        int dHeight;
};