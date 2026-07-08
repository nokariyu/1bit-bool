namespace riy
{
  class Bool
  {
    private:
    char* arr = nullptr;
    uint16_t Size;
    
    uint16_t pow(uint16_t num, uint16_t toP)
    {
        if (!toP) return 1;
        for(uint16_t i = 1; i < toP; i++) num*=num;
        return num;
    }
    
    void build()
    {
        arr = new char[(Size%8) ? (Size/8+1) : (Size/8)];
        for(uint16_t i = 0; i < Size; i++) arr[i] = 0;
    }
    public:
    
    Bool(uint16_t Size) : Size(Size)
    {
        build();
    }
    
    ~Bool()
    {
        delete[] arr;
    }
    
    uint16_t size() { return Size; }
    
    bool at(uint16_t pos)
    {
        uint16_t i = ((pos%8)?(pos/8):(pos/8 - 1) < 0) ? (0) : ((pos%8)?(pos/8):(pos/8 - 1));
        char buff = arr[i];
        buff <<= 7 - pos%8;
        buff >>= 7;
        return buff;
    }
    
    void setAt(uint16_t pos, bool to)
    {
        if(at(pos) != to) arr[(pos%8)?(pos/8):(pos/8 - 1)] += (to) ? (pow(2, pos%8)) : -(pow(2, pos%8));
    }
    
    void reSize(uint16_t Size)
    {
        this->Size = Size;
        delete[] arr;
        build();
    }
  };
}