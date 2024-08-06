def login():
    response = requests.post(base_url + login_endpoint, headers=headers, json=login_payload)
    print('Status Code:', response.status_code)
    print('Response Text:', response.text)
    try:
        response_json = response.json()
        print('Response JSON:', response_json)
        if response.status_code == 200 and 'data' in response_json:
            print('Login successful!')
            return response_json.get('data').get('jwtToken')
        else:
            print('Failed to login, unexpected response structure')
            print(response_json)
            return None
    except ValueError as e:
        print('Failed to parse response as JSON')
        print(e)
        return None
