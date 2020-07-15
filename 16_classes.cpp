#include <iostream>
#define LOG(x) std::cout << x << std::endl

class Log
{
public:
  // const int LogLevelError = 0;
  // const int LogLevelWarning = 1;
  // const int LogLevelInfo = 2;
  enum Level
  {
    LevelError = 0, LevelWarning, LevelInfo
  };
private:
  Level m_LogLevel1;
public:
  void SetLevel(Level level)
  {
    m_LogLevel1 = level;
  }
  void Warn(const char* message)
  {
    // LOG(message);
    if(m_LogLevel1 >= LevelWarning)
    std::cout << "[Warning]:" << message << std::endl;
  }
  void Error(const char* message)
  {
    if(m_LogLevel1 >= LevelError)
    std::cout << "[error]:" << message << std::endl;
  }
  void Info(const char* message)
  {
    if(m_LogLevel1 >= LevelInfo)
    std::cout << "[INfo]:" << message << std::endl;
  }
};
int main()
{
  Log log;
  log.SetLevel(Log::LevelInfo);
  log.Warn("hello!");
  log.Error("hello!");
  log.Info("hello!");
  std::cin.get();
}
