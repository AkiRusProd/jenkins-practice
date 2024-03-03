pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    // Создание докер-контейнера
                    docker.image('gcc').inside {
                        // Компиляция проекта
                        sh 'g++ -o sort_array sort_array.cpp'
                    }
                }
            }
        }

        stage('Archive') {
            steps {
                // Архивация бинарника как артефакта
                archiveArtifacts artifacts: 'sort_array', fingerprint: true
            }
        }
    }
}