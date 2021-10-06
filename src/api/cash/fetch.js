exports.fetch = () =>
  fetch('http://api.exchangeratesapi.io/v1/latest?access_key=f818efda12a862f5b1edb2eb1022b245&symbols=USD,AUD,CAD,PLN,MXN&format=1')
    .then(res => res.json())
    .then(({ rates }) => [
      { id: 'usd', code: 'USD', usd_rate: 1.0 },
      ...Object.keys(rates).map(id => ({
        id: id.toLowerCase(),
        code: id,
        usd_rate: 1 / rates[id],
      })),
    ])
    .then(rates => rates.sort((a, b) => a.id.localeCompare(b.id)));
