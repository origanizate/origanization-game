//fshdgfdoigsghrtgre
<<<<<<< HEAD
//WWW
=======
//sghfgjdsfkgfdg
>>>>>>> FETCH_HEAD
CSystemControl * CSystemControl::_instance = NULL;
CSystemControl * CSystemControl::Instance()
{
    if (_instance == NULL)
    {
        _instance = new CSystemControl;
        
    }
    return _instance;
}
CSystemControl::~CSystemControl()
{
    
    destroy();
    cout<<"destroy"<<endl;
}
void CSystemControl::destroy()
{
    if (_instance)
    {
        delete _instance;
        _instance = NULL;
        
    }
}
CSystemControl::CSystemControl()
{
    cout<<"Construct a SystemControl object"<<endl;
}
void CSystemControl::print()
{
    cout<<"Call thw Print method"<<endl;
}