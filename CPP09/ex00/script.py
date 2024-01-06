

import random
from datetime import datetime, timedelta

def generate_random_date(start_date, end_date):
    start_datetime = datetime.strptime(start_date, "%Y-%m-%d")
    end_datetime = datetime.strptime(end_date, "%Y-%m-%d")
    random_days = random.randint(0, (end_datetime - start_datetime).days)
    return (start_datetime + timedelta(days=random_days)).strftime("%Y-%m-%d")

with open('input.txt', 'w') as file:
    file.write('date | value\n')

    start_date = '2011-01-01'
    end_date = '2011-12-31'

    for _ in range(100):
        date = generate_random_date(start_date, end_date)
        value = round(random.uniform(1, 100), 2)
        file.write(f"{date} | {value}\n")

