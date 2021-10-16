import base64

class Codec:

    def __init__(self):
        self.urls = {}
        self.url_base = "http://tinyurl.com/"


    def encode(self, long_url):
        url_enc = long_url.encode('ascii')
        url_64_enc = base64.b64encode(url_enc)
        url_64_dec = url_64_enc.decode('ascii')
        self.urls[url_64_dec] = long_url
        return self.url_base + url_64_dec


    def decode(self, short_url: str) -> str:
        url_splited = short_url.split('/', 3)
        url_decoded = self.urls[url_splited[-1]]
        return url_decoded
