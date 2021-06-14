
    

hash_table = list(i for i in range(8))

def get_key(data):
    return hash(data)

def hash_func(key):
    return key % 8

def save_data(data,value):
    hash_address = hash_func(get_key(data))
    hash_table[hash_address] = value

def read_data(data):
    return hash_table[hash_func(get_key(data))]

save_data('park','010-5340-0512')
save_data('kim','010-4444-5555')
save_data('ju','010-66665-5555')


print(read_data('park'))
print(read_data('ju'))