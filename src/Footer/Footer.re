open Helpers;

loadCSS("./Footer.css");

let component = ReasonReact.statelessComponent("Footer");

let middot = {j|\u00B7|j};

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="footer">
      <div className="inner">
        <div className="info">
          <div className="code">
            <a className="github" href="https://github.com/CryptoDevelopmentServices">
              (se("GitHub"))
            </a>
          </div>
          <div className="made-by">
            (se({j|by |j}))
            <a className="home" href="https://www.cryptodevservices.com"> (se("Crypto Development Services")) </a>
          </div>
        </div>
        <div className="addresses">
          <div className="bitcoin"> (se("BTC: 3DNVMDj4VQZb31t5LkmmDyw6dZqe35SwHd")) </div>
          <div className="binance coin"> (se("BNB: 0x136ae4016E3b19af6351EeDc1966f9468cD04197")) </div>
          <div className="Crypto Development Services"> (se("CDS: 0x136ae4016E3b19af6351EeDc1966f9468cD04197")) </div>
        </div>
      </div>
    </div>
};
