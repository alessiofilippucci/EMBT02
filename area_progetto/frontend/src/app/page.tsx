"use client";

import Image from "next/image";
import styles from "./page.module.css";
import { useEffect, useState } from "react";

export default function Home() {
  const [data, setData] = useState([]);

  const getData = () => {
    fetch("http://localhost:5128/WeatherForecast/GetData")
      .then((res) => {
        return res.json();
      })
      .then((data) => {
        setData(data);
      })
      .catch((err) => {
        console.log(err);
      });
  };

  useEffect(() => {
    setInterval(() => {
      getData();
    }, 1000);
  }, []);

  return (
    <div className={styles.page}>
      <main className={styles.main}>
        <ul>
          {data.map((element, idx) => {
            return <li key={idx}>{element}</li>;
          })}
        </ul>
      </main>
    </div>
  );
}
