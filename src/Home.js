import React from 'react';
import "./Home.css";
import Product from './Product';

function Home() {
    return (
        <div className="home">
            <div className="home__container">
                <img className="home__image" src="https://www.upcomingphones.in/wp-content/uploads/2019/08/NOCOST-EMI_1500x300-min.jpg"alt=""/>
                <div className="home__row">
                    <Product id="0273644" title="I pad pro (4th gen || 128G.B SSD and 12G.B. RAM)-Sliver 12.5 inch ALMOD Display and much more advanced features!" image="http://images.apple.com/ipad-pro/specs/images/og.jpg?201611161601" price={503} rating={4} />
                    <Product id="01234" title="samsung galaxy tab s3" image="https://images.samsung.com/is/image/samsung/ca-galaxy-tab-s3-wifi-sm-t820nzkaxac-frontblack-106368553?$PD_GALLERY_L_JPG$" price={789} rating={5}/>
                    
                  

                   
                </div>

                <div className="home__row">
                <Product id="337821" title="Asus rog gaming beast"  image="http://image.itdonga.com/files/2018/01/15/004.png" price={3678} rating={4}/>
                <Product id="00000" title="Asus gaming pc . Trust us!!its a beast" image="https://images.idgesg.net/images/article/2018/05/pg27uq_front-100758762-large.jpg" price={345} rating={4}/>
                <Product id="432132" title="lol" image="https://image-us.samsung.com/SamsungUS/mobile/phones/06102019-new/First_s10_5G_Lockup1_Silver_gallery.jpg?$product-details-jpg$"price={1443} rating={4}/>
                

                </div>

                <div className="home__row">
                <Product id="9848321" title="what up homie?" image="http://ineedthatshit.com/wp-content/uploads/2014/08/Samsung-Curved-105-Inch-4K-TV-Front.jpg" price={4567} rating={4} />
        
                </div>
            </div>
           
        </div>
          
       
      
    )
}

export default Home;
