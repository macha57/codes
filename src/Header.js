import React from 'react';
import "./Header.css";
import SearchIcon from "@material-ui/icons/Search";
import HomeIcon from "@material-ui/icons/Home";
import FlagIcon from "@material-ui/icons/Flag";
import SubscriptionsOutlinedIcon from "@material-ui/icons/SubscriptionsOutlined";
import StorefrontOutlinedIcon from "@material-ui/icons/StorefrontOutlined";
import SupervisedUserCircleIcon from "@material-ui/icons/SupervisedUserCircle";
import { Avatar, IconButton } from "@material-ui/core";
import AddIcon from "@material-ui/icons/Add";
import ForumIcon from  "@material-ui/icons/Forum";
import NotificationsActiveIcon from "@material-ui/icons/NotificationsActive";
import ExpandMoreIcon from "@material-ui/icons/ExpandMore";
import { useStateValue } from "./StateProvider";





function Header() {
    const [{ user }, dispatch] = useStateValue();
    return (
        <div className="header">
            <div className="header__left">
                <img src="https://cmkt-image-prd.global.ssl.fastly.net/0.1.0/ps/3912752/1820/1214/m1/fpnw/wm0/letter-p-logo-01-.jpg?1517085620&s=e0a24824111d9a26b082244e4c35b0dc" alt="" />
                <div className="header__input">
                    <SearchIcon />
                    <input placeholder=" search Prasanna"type="text" />
                </div>
            
            </div>

            <div className="header__center">
                <div className="header__option--active">
                    <HomeIcon fontSize="large"/>
                </div>

                <div className="header__option">
                    <FlagIcon fontSize="large"/>
                </div>
                <div className="header__option">
                    <SubscriptionsOutlinedIcon fontSize="large"/>
                </div>

                <div className="header__option">
                    <StorefrontOutlinedIcon fontSize="large"/>
                </div>

                <div className="header__option">
                    <SupervisedUserCircleIcon fontSize="large"/>
                </div>
            </div>

            <div className="header__right">
                <div className="header__info">
                    <Avatar src ={user.photoURL}/>
                    <h4> {user.displayName} </h4>
                </div>
                <IconButton>
                    <AddIcon />
                </IconButton>
                <IconButton>
                    <ForumIcon/>
                </IconButton>
                <IconButton>
                    <NotificationsActiveIcon />
                </IconButton>
                <IconButton>
                    <ExpandMoreIcon/>
                </IconButton>
            </div>
          
          



        </div>
    )
}

export default Header;
