

import React from 'react';
import "./Login.css";
import { Button } from '@material-ui/core';
import { auth, provider } from "./firebase";
import { actionTypes } from "./reducer";
import { useStateValue } from "./StateProvider";

function Login() {
    const [state, dispatch] = useStateValue();


    const signIn = () =>{
        //sign in...
        auth.signInWithPopup(provider).then((result) =>{
            
            dispatch({
                type: actionTypes.SET_USER,
                user: result.user,
            });

            
        })
        .catch((error) => alert(error.message));
    };
    return (
        <div className="login">
            <div className="login__logo">
                <img src="https://cmkt-image-prd.global.ssl.fastly.net/0.1.0/ps/3912752/1820/1214/m1/fpnw/wm0/letter-p-logo-01-.jpg?1517085620&s=e0a24824111d9a26b082244e4c35b0dc" alt="" />
                <h1 style={{color: 'green'}}>Log in to prasanna networks!</h1>

            </div>

            <Button type="submit" onClick={signIn}>Signin</Button>
            
        </div>
    )
}

export default Login
