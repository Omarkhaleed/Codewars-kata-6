class ColorChoice
{
public:
    static long long checkChoose(long long m, int n);
};

long long ColorChoice::checkChoose(long long m, int n)
{
  long long result = 1;
  for (int i = 0; i <= n; ++i)
  {
    if (result == m) return i;
    result = result * (n - i) / (i + 1);
  }
  return -1;
}
