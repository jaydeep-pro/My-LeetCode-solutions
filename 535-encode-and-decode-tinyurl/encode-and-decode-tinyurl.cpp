class Solution {
public:
    unordered_map<string, string> long_to_short;
    unordered_map<string, string> short_to_long;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
 long_to_short[longUrl] = "http://jaydeep.com/" + to_string(hash_function(longUrl));
 short_to_long[long_to_short[longUrl]] = longUrl;
      return long_to_short[longUrl];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
       return short_to_long[shortUrl];
    }

    private:
    long long int hash_function( string& str) {
      long long int hash = 9239;

        for(int i = 0; i < str.size(); ++i) {
           uint64_t value = str[i];
            hash = hash * value;
        }

        return hash;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));